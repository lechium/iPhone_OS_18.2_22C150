//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC21automationmode_writer6Reader : NSObject
{
    MISSING_TYPE *stateFilePath;	// 8 = 0x8
    MISSING_TYPE *noAuthRequiredFilePath;	// 24 = 0x18
    MISSING_TYPE *bootSessionUUID;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000001cf0
- (id)init;	// IMP=0x0010000000001e40
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000001dd0
- (void)requestAutomationModeRequiresAuthenticationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001d50
- (void)requestAutomationModeEnabledStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000001d30
- (void)dealloc;	// IMP=0x0010000000001be0

@end

