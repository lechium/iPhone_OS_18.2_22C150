//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PREditingContentStylePickerComponentViewController, PREditingPosterContentStyleCoordinator;
@protocol PRPosterContentStyle;

@protocol PREditingContentStylePickerComponentViewControllerDelegate
- (PREditingPosterContentStyleCoordinator *)contentStylePickerComponentViewController:(PREditingContentStylePickerComponentViewController *)arg1 coordinatorForStyle:(id <PRPosterContentStyle>)arg2 isSuggested:(_Bool)arg3;
- (void)contentStylePickerComponentViewControllerDidChangeHeight:(PREditingContentStylePickerComponentViewController *)arg1;
- (void)contentStylePickerComponentViewController:(PREditingContentStylePickerComponentViewController *)arg1 didSelectStyle:(id <PRPosterContentStyle>)arg2 isSuggestedStyle:(_Bool)arg3 userSelected:(_Bool)arg4;
@end
