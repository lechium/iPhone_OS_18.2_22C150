//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@class NSArray, TSWPEditingController, TSWPRep, TSWPStorage, UIView, UIViewController;
@protocol TSWPStyleProvider;

@protocol TSWPEditingControllerDelegate <NSObject>

@optional
@property(readonly, nonatomic) _Bool editorAllowsListInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsRubyInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsHyperlinkInteraction;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsCaret;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsKeyboard;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsParagraphMode;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsMagnifier;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorAllowsEditMenu;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

@property(readonly, nonatomic) _Bool editorShouldAlwaysBeInParagraphMode;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)didSetTappedSelectionWithWPEditor:(TSWPEditingController *)arg1 onWPRep:(TSWPRep *)arg2;
- (_Bool)disallowEditingOfTextStringWithStorage:(TSWPStorage *)arg1;
- (UIView *)formatBarAccessoryView;
- (UIViewController *)viewControllerForPresenting;
- (void)knobTrackingDidEnd;
- (void)knobTrackingDidBegin;
- (void)showCustomEditMenuForStorage:(TSWPStorage *)arg1 range:(struct _NSRange)arg2;
- (_Bool)willChangeContentOffsetIfKeyboardHidden;
- (void)filterPasteboardTextStorages:(NSArray *)arg1 forTargetStorage:(TSWPStorage *)arg2;
- (id <TSWPStyleProvider>)styleProviderForStorage:(TSWPStorage *)arg1;
- (void)editingController:(TSWPEditingController *)arg1 willDeleteCharactersInRange:(struct _NSRange)arg2;
@end

