//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface ServiceBridgedPresentationController : NSObject
{
    UIViewController *_savedViewController;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0040000000012f6b
- (void).cxx_destruct;	// IMP=0x0020000000013149
@property(retain, nonatomic) UIViewController *savedViewController; // @synthesize savedViewController=_savedViewController;
- (_Bool)saveViewController:(id)arg1 animated:(_Bool)arg2 presentationBounds:(struct CGRect)arg3 proxyHandler:(id)arg4;	// IMP=0x001000000001300a
- (id)removeSavedViewController;	// IMP=0x0010000000012fc0

@end

