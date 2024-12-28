//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOAuthorizationCore;
@protocol SOAuthorizationCoreDelegate;

__attribute__((visibility("hidden")))
@interface SOAuthorizationPoolItem : NSObject
{
    SOAuthorizationCore *_authorization;	// 8 = 0x8
    id <SOAuthorizationCoreDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009661
@property(readonly, nonatomic) id <SOAuthorizationCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SOAuthorizationCore *authorization; // @synthesize authorization=_authorization;
- (id)initWithAuthorization:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000095b4

@end
