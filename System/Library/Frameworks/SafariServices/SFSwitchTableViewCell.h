//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class UISwitch;
@protocol SFSwitchTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface SFSwitchTableViewCell : UITableViewCell
{
    UISwitch *_switchView;	// 8 = 0x8
    id <SFSwitchTableViewCellDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009bb14
@property(nonatomic) __weak id <SFSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_switchViewStateDidChange:(id)arg1;	// IMP=0x000000000009ba5c
@property(nonatomic, getter=isSwitchOn) _Bool switchOn;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000009b939

@end

