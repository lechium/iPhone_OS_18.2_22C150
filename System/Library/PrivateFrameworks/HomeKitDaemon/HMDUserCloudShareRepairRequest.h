//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMUserCloudShareRepairInfo;

__attribute__((visibility("hidden")))
@interface HMDUserCloudShareRepairRequest
{
    HMUserCloudShareRepairInfo *_repairInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000008c2e09
@property(readonly) HMUserCloudShareRepairInfo *repairInfo; // @synthesize repairInfo=_repairInfo;
- (id)description;	// IMP=0x00000000008c2d36
- (id)initWithStartDate:(id)arg1 containerID:(id)arg2 home:(id)arg3 repairInfo:(id)arg4;	// IMP=0x00000000008c2cac

@end
