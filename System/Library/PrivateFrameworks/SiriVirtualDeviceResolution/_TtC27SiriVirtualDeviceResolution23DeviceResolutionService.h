//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC27SiriVirtualDeviceResolution23DeviceResolutionService : NSObject
{
    MISSING_TYPE *homeManagerReadyGroup;	// 8 = 0x8
    MISSING_TYPE *queue;	// 16 = 0x10
    MISSING_TYPE *homeManager;	// 24 = 0x18
    MISSING_TYPE *initialLoadDone;	// 32 = 0x20
    MISSING_TYPE *endpointUUID;	// 0 = 0x0
    MISSING_TYPE *waitingOnHomeManagerDataSync;	// 0 = 0x0
    MISSING_TYPE *_xpcConnection;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000002438f
- (void)homeManagerDidUpdateDataSyncInProgress:(id)arg1;	// IMP=0x000000000002431b
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x0000000000024184
- (id)init;	// IMP=0x00000000000184e1

@end

