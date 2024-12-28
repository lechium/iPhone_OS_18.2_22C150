//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNClassificationCustomHierarchy;

__attribute__((visibility("hidden")))
@interface VNClassifyImageRequestConfiguration
{
    VNClassificationCustomHierarchy *_customHierarchy;	// 8 = 0x8
    unsigned long long _maximumLeafObservations;	// 16 = 0x10
    unsigned long long _maximumHierarchicalObservations;	// 24 = 0x18
    unsigned long long _imageCropAndScaleOption;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000024278d
@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
@property(nonatomic) unsigned long long maximumHierarchicalObservations; // @synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations;
@property(nonatomic) unsigned long long maximumLeafObservations; // @synthesize maximumLeafObservations=_maximumLeafObservations;
@property(retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // @synthesize customHierarchy=_customHierarchy;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000242642
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000002425df

@end
