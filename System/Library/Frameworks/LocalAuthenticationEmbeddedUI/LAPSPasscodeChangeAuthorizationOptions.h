//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LAPSPasscodeChangeAuthorizationOptions : NSObject
{
    NSURL *_calloutURL;	// 8 = 0x8
    NSString *_calloutReason;	// 16 = 0x10
    long long _useCase;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001f71e
@property(readonly, nonatomic) long long useCase; // @synthesize useCase=_useCase;
@property(retain, nonatomic) NSString *calloutReason; // @synthesize calloutReason=_calloutReason;
@property(retain, nonatomic) NSURL *calloutURL; // @synthesize calloutURL=_calloutURL;
- (id)initWithUseCase:(long long)arg1;	// IMP=0x000000000001f6a1

@end
