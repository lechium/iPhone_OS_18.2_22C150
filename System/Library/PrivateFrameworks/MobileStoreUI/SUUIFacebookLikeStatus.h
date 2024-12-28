//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface SUUIFacebookLikeStatus : NSObject
{
    NSArray *_friends;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    _Bool _userLiked;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007a026
@property(nonatomic, getter=isUserLiked) _Bool userLiked; // @synthesize userLiked=_userLiked;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSArray *friendNames; // @synthesize friendNames=_friends;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079f4a
- (id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2;	// IMP=0x0000000000079c37

@end
