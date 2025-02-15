//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDQueryServer.h>

@class HKMHCountBasedQueryConfiguration;

__attribute__((visibility("hidden")))
@interface HDMHMostPrevalentDomainsQueryServer : HDQueryServer
{
    HKMHCountBasedQueryConfiguration *_configuration;	// 8 = 0x8
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000010905
+ (id)requiredEntitlements;	// IMP=0x00600000000108f8
+ (Class)queryClass;	// IMP=0x00600000000108e7
- (void).cxx_destruct;	// IMP=0x000000000001141c
- (_Bool)_queue_surfaceMostPrevalentDomainsWithError:(id *)arg1;	// IMP=0x0000000000010f53
- (void)_queue_start;	// IMP=0x0000000000010a70
- (id)objectTypes;	// IMP=0x0000000000010a06
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000001085a

@end

