//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLTTestService;

@interface SPCompanionNotificationHandler : NSObject
{
    BLTTestService *_bltTestService;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000002ce0e
- (void).cxx_destruct;	// IMP=0x002000000002ce92
- (id)init;	// IMP=0x001000000002ce63
- (void)injectBulletinWithSectionID:(id)arg1 gizmoAppIdentifier:(id)arg2 bulletinID:(id)arg3 remoteNotificationContext:(id)arg4 forceStatic:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000002bf0e

@end
