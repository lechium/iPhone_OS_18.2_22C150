//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UITableView;

__attribute__((visibility("hidden")))
@interface MRURoutingView : UIView
{
    UITableView *_tableView;	// 8 = 0x8
    struct UIEdgeInsets _contentEdgeInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006d2b2
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000006d195
- (void)layoutSubviews;	// IMP=0x000000000006d114
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006cf60

@end
