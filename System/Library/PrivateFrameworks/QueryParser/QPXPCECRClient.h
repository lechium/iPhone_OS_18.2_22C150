//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GDEntityResolutionTextClient;

__attribute__((visibility("hidden")))
@interface QPXPCECRClient
{
    GDEntityResolutionTextClient *_client;	// 24 = 0x18
}

+ (id)sharedClient;	// IMP=0x0060000000086bb7
- (void).cxx_destruct;	// IMP=0x0000000000086d8d
- (_Bool)coolDownECRClientSyncWithError:(id *)arg1;	// IMP=0x0000000000086d85
- (_Bool)warmUpECRClientSyncWithError:(id *)arg1;	// IMP=0x0000000000086d16
- (id)resolveEntitiesWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000086cf9
- (id)init;	// IMP=0x0000000000086c3c

@end
