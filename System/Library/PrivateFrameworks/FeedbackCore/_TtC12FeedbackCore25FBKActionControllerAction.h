//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC12FeedbackCore25FBKActionControllerAction : NSObject
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *image;	// 24 = 0x18
    MISSING_TYPE *destructive;	// 32 = 0x20
    MISSING_TYPE *actionHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000f44b0
- (id)init;	// IMP=0x00000000000f4460
- (id)initWithTitle:(id)arg1 image:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f43c0
@property(nonatomic, copy) CDUnknownBlockType actionHandler;
@property(nonatomic) _Bool destructive; // @synthesize destructive;
@property(nonatomic, retain) UIImage *image; // @synthesize image;
@property(nonatomic, copy) NSString *title;

@end

