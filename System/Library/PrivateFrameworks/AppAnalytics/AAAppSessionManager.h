//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AAAppSessionManager : NSObject
{
    MISSING_TYPE *appSessionManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a3de0
- (void)appSessionDidTerminate;	// IMP=0x00000000000a3d80
- (void)endAppSession:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a3b80
- (void)startAppSessionWithShouldCorrelateSceneSessions:(_Bool)arg1;	// IMP=0x00000000000a3960
- (void)startAppSession;	// IMP=0x00000000000a3850
- (id)createSessionManager;	// IMP=0x00000000000a3740
- (id)initWithTrackingConsent:(id)arg1;	// IMP=0x00000000000a3680
- (id)init;	// IMP=0x00000000000a3480

@end

