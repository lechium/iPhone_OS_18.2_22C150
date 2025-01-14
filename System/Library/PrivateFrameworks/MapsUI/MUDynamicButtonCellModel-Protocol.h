//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/NSObject-Protocol.h>

@class NSString, UIMenu;
@protocol MUDynamicButtonCellModelChangeDelegate;

@protocol MUDynamicButtonCellModel <NSObject>
@property(readonly, nonatomic) long long actionStyle;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) CDUnknownBlockType actionBlock;
@property(readonly, nonatomic) NSString *symbolName;
@property(readonly, nonatomic) NSString *titleString;

@optional
@property(readonly, nonatomic) long long cellStyle;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,R,N

@property(copy, nonatomic) UIMenu *menu;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIMenu",?,C,N

@property(nonatomic) __weak id <MUDynamicButtonCellModelChangeDelegate> changeDelegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<MUDynamicButtonCellModelChangeDelegate>",?,W,N

- (NSString *)accessibilityIdentifierForAction;
@end

