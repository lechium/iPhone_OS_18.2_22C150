//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/SCNScene.h>

@interface SCNScene (AVTExtensionMRR)
+ (id)avt_nodeNamed:(id)arg1 forSceneAtURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00800000000101af
+ (id)avt_rootNodeForSceneAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00800000000100ee
+ (id)avt_newSceneWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x008000000000fecd
+ (id)avt_rootObjectForSceneAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x008000000000fd59
- (_Bool)avt_writeByArchivingRootNodeInsteadOfScene:(_Bool)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000010293
- (id)avt_init;	// IMP=0x001000000000fd47
- (void)avt_removeFaceSetsExportedAsDummyNodesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005c479
- (void)avt_removeDuplicateSkeletonRootWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005bb2f
- (void)avt_setInitialValuesExportedAsAnimationsWithWithOptions:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b2e2
- (void)avt_fixQuirksOfNewUSDSchemaWithOptions:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b26e
@end

