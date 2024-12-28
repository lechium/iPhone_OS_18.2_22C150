//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _UISEAllGestureFeature
{
    NSMutableIndexSet *_unrecognizedIndexes;	// 8 = 0x8
    NSArray *_subfeatures;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c2342d
@property(readonly, nonatomic) NSArray *subfeatures; // @synthesize subfeatures=_subfeatures;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;	// IMP=0x0000000000c23182
- (id)debugDictionary;	// IMP=0x0000000000c22f5e
- (void)featureDidChangeState:(id)arg1;	// IMP=0x0000000000c22e86
- (id)initWithSubfeatures:(id)arg1;	// IMP=0x0000000000c22cb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
