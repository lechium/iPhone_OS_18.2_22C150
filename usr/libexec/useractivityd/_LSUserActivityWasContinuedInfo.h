//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface _LSUserActivityWasContinuedInfo : NSObject
{
    _Bool _submitted;	// 8 = 0x8
    _Bool _fromPairedDevice;	// 9 = 0x9
    _Bool _browserFallback;	// 10 = 0xa
    _Bool _cancelled;	// 11 = 0xb
    _Bool _webToNative;	// 12 = 0xc
    _Bool _supportsContinuityStreams;	// 13 = 0xd
    _Bool _scheduledForSubmission;	// 14 = 0xe
    _Bool _payloadRequested;	// 15 = 0xf
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_activityType;	// 24 = 0x18
    unsigned long long _suggestedActionType;	// 32 = 0x20
    unsigned long long _payloadSize;	// 40 = 0x28
    double _transferSpeed;	// 48 = 0x30
    double _transferDuration;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    unsigned long long _interactionType;	// 72 = 0x48
    NSString *_remoteDeviceType;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000013229
@property _Bool payloadRequested; // @synthesize payloadRequested=_payloadRequested;
@property _Bool scheduledForSubmission; // @synthesize scheduledForSubmission=_scheduledForSubmission;
@property(copy) NSString *remoteDeviceType; // @synthesize remoteDeviceType=_remoteDeviceType;
@property _Bool supportsContinuityStreams; // @synthesize supportsContinuityStreams=_supportsContinuityStreams;
@property _Bool webToNative; // @synthesize webToNative=_webToNative;
@property unsigned long long interactionType; // @synthesize interactionType=_interactionType;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy) NSError *error; // @synthesize error=_error;
@property double transferDuration; // @synthesize transferDuration=_transferDuration;
@property double transferSpeed; // @synthesize transferSpeed=_transferSpeed;
@property unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(getter=isBrowserFallback) _Bool browserFallback; // @synthesize browserFallback=_browserFallback;
@property(getter=isFromPairedDevice) _Bool fromPairedDevice; // @synthesize fromPairedDevice=_fromPairedDevice;
@property unsigned long long suggestedActionType; // @synthesize suggestedActionType=_suggestedActionType;
@property(copy) NSString *activityType; // @synthesize activityType=_activityType;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x0010000000012e48
- (void)submit;	// IMP=0x0010000000012dec
- (void)submitWasSuggestedInfo;	// IMP=0x0010000000012de6

@end
