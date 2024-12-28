//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, UIImageView, UITextField;
@protocol MapsSuggestionsShortcutLike;

@interface EditShortcutTitleCell : UITableViewCell
{
    UITextField *_textField;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    id <MapsSuggestionsShortcutLike> _shortcut;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000006570dc
- (void)_updateFonts;	// IMP=0x001000000065706a
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0010000000657058
- (void)resignResponder;	// IMP=0x001000000065703b
- (_Bool)makeFirstResponder;	// IMP=0x001000000065701e
@property(readonly, nonatomic) NSString *titleText;
- (void)updateContent;	// IMP=0x0010000000656e99
- (id)initWithShortcut:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000006565a5

@end
