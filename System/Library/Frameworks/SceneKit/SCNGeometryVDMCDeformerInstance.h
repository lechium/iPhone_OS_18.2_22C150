//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SCNMTLMesh;

__attribute__((visibility("hidden")))
@interface SCNGeometryVDMCDeformerInstance : NSObject
{
    SCNMTLMesh *_subdivMesh;	// 8 = 0x8
    NSMutableArray *_meshElementData;	// 16 = 0x10
}

- (unsigned long long)updateWithContext:(id)arg1;	// IMP=0x00000000002cc71f
- (id)meshForDeformedTopology;	// IMP=0x00000000002cc715
- (void)dealloc;	// IMP=0x00000000002cc6da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
