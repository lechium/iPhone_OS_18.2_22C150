//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKSendMenuPopoverAnimation : NSObject
{
    CDUnknownBlockType _completion;	// 8 = 0x8
    NSArray *_animators;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_group;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000036bd2b
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(copy, nonatomic) NSArray *animators; // @synthesize animators=_animators;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000036bccc
- (void)startAnimation;	// IMP=0x000000000036ba7a
- (id)initWithAnimators:(id)arg1;	// IMP=0x000000000036b9d7

@end
