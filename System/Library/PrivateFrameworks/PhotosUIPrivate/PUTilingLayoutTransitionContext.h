//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface PUTilingLayoutTransitionContext : NSObject
{
    _Bool _isCancelingTransition;	// 8 = 0x8
    _Bool _isViewControllerTransition;	// 9 = 0x9
    _Bool _isUpdatingDisplayedContent;	// 10 = 0xa
    NSObject<OS_dispatch_group> *_displayedContentUpdateGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005e1343
@property(retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup; // @synthesize displayedContentUpdateGroup=_displayedContentUpdateGroup;
@property(nonatomic) _Bool isUpdatingDisplayedContent; // @synthesize isUpdatingDisplayedContent=_isUpdatingDisplayedContent;
@property(nonatomic) _Bool isViewControllerTransition; // @synthesize isViewControllerTransition=_isViewControllerTransition;
@property(nonatomic, setter=setCancelingTransition:) _Bool isCancelingTransition; // @synthesize isCancelingTransition=_isCancelingTransition;

@end

