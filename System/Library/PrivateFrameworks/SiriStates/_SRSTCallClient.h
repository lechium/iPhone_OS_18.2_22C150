//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _SRSTCallState;
@protocol _SRSTCallClientDelegate;

@interface _SRSTCallClient : NSObject
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *_currentState;	// 1181053551 = 0x4665726f
    MISSING_TYPE *_mostRecentEvent;	// 2147483672 = 0x80000018
    MISSING_TYPE *stopped;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000015460
- (void)stopClient;	// IMP=0x00000000000160e0
- (id)init;	// IMP=0x0000000000015f30
- (void)dealloc;	// IMP=0x0000000000015440
- (void)dispatchEvent:(long long)arg1;	// IMP=0x0000000000015250
@property(nonatomic, readonly) NSString *mostRecentEventName;
@property(nonatomic, retain) _SRSTCallState *currentState;
@property(nonatomic) __weak id <_SRSTCallClientDelegate> delegate; // @synthesize delegate;

@end
