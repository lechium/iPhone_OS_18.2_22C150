//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNShotflowDetectorANODv4
{
}

+ (id)filterThresholdsArrayForFilterThresholds:(id)arg1 error:(id *)arg2;	// IMP=0x008000000026007a
+ (id)defaultFilterThresholds;	// IMP=0x008000000026004a
+ (Class)VNShotflowNetworkClass;	// IMP=0x0080000000260039
+ (id)supportedLabelKeys;	// IMP=0x008000000025ffd6
- (id)nmsBoxes:(id)arg1 usingThresholds:(id)arg2;	// IMP=0x0000000000260650
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x000000000026057b
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 filterThresholds:(id)arg4;	// IMP=0x00000000002603f4
- (id)initWithNetwork:(id)arg1;	// IMP=0x000000000026039f

@end
