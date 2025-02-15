//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class MUUserInteractionAction, MUWebMenuItem, MUWebUIMenu;

@protocol MUWebUIMenuActionHandler <NSObject>
- (void)performActionUsingArguments:(MUWebMenuItem *)arg1 contextMenu:(MUWebUIMenu *)arg2 completion:(void (^)(_Bool))arg3;
- (void)performActionWithAction:(MUUserInteractionAction *)arg1 contextMenu:(MUWebUIMenu *)arg2 completion:(void (^)(_Bool))arg3;
@end

