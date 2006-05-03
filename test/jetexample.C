{
   gSystem->Load("libPhysicsToolsFWLite");
   AutoLibraryLoader::enable();
   TChain jets("Events");
   jets.Add("jets.root");
   gSystem->Load( "libPhysicsToolsParallelAnalysis" );
   JetTSelector * selector = new JetTSelector;
   jets.Process( selector );
}
