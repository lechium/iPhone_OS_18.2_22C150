//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSmartCamClassifier
{
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;	// IMP=0x0040000000234839
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x004000000023477f
+ (id)createObservationWithDescriptors:(id)arg1 forOriginatingRequestSpecifier:(id)arg2;	// IMP=0x00400000002346f2
+ (id)returnAllResultsOptionKey;	// IMP=0x00400000002346e5
+ (Class)espressoModelImageprintClass;	// IMP=0x00400000002346d4
+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x0040000000234657
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;	// IMP=0x0040000000234422
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;	// IMP=0x0040000000233f5f
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000233f30

@end
