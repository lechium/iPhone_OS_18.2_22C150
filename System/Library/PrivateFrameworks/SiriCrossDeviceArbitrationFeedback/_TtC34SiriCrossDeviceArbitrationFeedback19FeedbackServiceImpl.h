//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol _TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_, _TtP34SiriCrossDeviceArbitrationFeedback7Globals_;

@interface _TtC34SiriCrossDeviceArbitrationFeedback19FeedbackServiceImpl : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_userfeedbackController;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_notificationService;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_globals;	// 40 = 0x28
}

+ (id)receivedArbitrationsDirectoryURL;	// IMP=0x0010000000030d37
+ (id)sharedService;	// IMP=0x0010000000030920
- (void).cxx_destruct;	// IMP=0x0000000000033101
- (id)init;	// IMP=0x00000000000330c0
- (void)handleAssistantDismissed;	// IMP=0x000000000003303a
- (void)addWithParticipation:(id)arg1 directoryPath:(id)arg2;	// IMP=0x0000000000032e4b
- (void)add:(id)arg1;	// IMP=0x0000000000030e18
@property(nonatomic, retain) id <_TtP34SiriCrossDeviceArbitrationFeedback7Globals_> globals;
@property(nonatomic, retain) id <_TtP34SiriCrossDeviceArbitrationFeedback23FeedbackServiceDelegate_> delegate; // @synthesize delegate;
- (void)handleWithResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033df4

@end

