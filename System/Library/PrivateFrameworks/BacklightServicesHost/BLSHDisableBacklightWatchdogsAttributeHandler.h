//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHWatchdogProvider;

__attribute__((visibility("hidden")))
@interface BLSHDisableBacklightWatchdogsAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    BLSHWatchdogProvider *_provider;	// 8 = 0x8
}

+ (Class)attributeBaseClass;	// IMP=0x006000000004d006
+ (id)attributeClasses;	// IMP=0x006000000004cf9a
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x006000000004ce9a
- (void).cxx_destruct;	// IMP=0x000000000004d058
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x000000000004d036
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x000000000004d017
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x000000000004cf22

@end

