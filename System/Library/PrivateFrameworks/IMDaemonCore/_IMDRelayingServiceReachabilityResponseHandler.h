//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMServiceReachabilityResult, NSData, NSString;

@interface _IMDRelayingServiceReachabilityResponseHandler : NSObject
{
    NSString *_requestID;	// 8 = 0x8
    NSData *_pushToken;	// 16 = 0x10
    NSString *_fromIdentifier;	// 24 = 0x18
    NSString *_toIdentifier;	// 32 = 0x20
    IMServiceReachabilityResult *_lastResult;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004a4af
@property(retain, nonatomic) IMServiceReachabilityResult *lastResult; // @synthesize lastResult=_lastResult;
@property(retain, nonatomic) NSString *toIdentifier; // @synthesize toIdentifier=_toIdentifier;
@property(retain, nonatomic) NSString *fromIdentifier; // @synthesize fromIdentifier=_fromIdentifier;
@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void)reachabilityRequest:(id)arg1 updatedWithResult:(id)arg2;	// IMP=0x000000000004a2e1
- (void)_deferSendingCurrentResultIfNeeded;	// IMP=0x000000000004a16d
- (void)_sendCurrentResult;	// IMP=0x0000000000049dc6
- (id)initWithRequestID:(id)arg1 pushToken:(id)arg2 fromIdentifier:(id)arg3 toIdentifier:(id)arg4;	// IMP=0x0000000000049cde

@end

