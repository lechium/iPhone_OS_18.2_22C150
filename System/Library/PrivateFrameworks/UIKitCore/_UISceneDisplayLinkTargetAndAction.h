//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLinkTargetAndAction : NSObject
{
    id _target;	// 8 = 0x8
    SEL _action;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a3c6bf
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000a3c630

@end
