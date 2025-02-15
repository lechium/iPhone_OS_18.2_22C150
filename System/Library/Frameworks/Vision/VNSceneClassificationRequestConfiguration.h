//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNClassificationCustomHierarchy, VNSceneObservation;

__attribute__((visibility("hidden")))
@interface VNSceneClassificationRequestConfiguration
{
    VNSceneObservation *_sceneObservation;	// 8 = 0x8
    VNClassificationCustomHierarchy *_customHierarchy;	// 16 = 0x10
    unsigned long long _maximumLeafObservations;	// 24 = 0x18
    unsigned long long _maximumHierarchicalObservations;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001bbe1e
@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
@property(retain, nonatomic) VNSceneObservation *sceneObservation; // @synthesize sceneObservation=_sceneObservation;
- (id)description;	// IMP=0x00000000001bbc10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bbb50
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000001bbb01

@end

