//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSString, QuerySuggestionView;
@protocol AutocompleteCellAccessoryDelegate;

@interface QuerySuggestionTableViewCell : UITableViewCell
{
    id <AutocompleteCellAccessoryDelegate> _accessoryViewDelegate;	// 8 = 0x8
    id _accessoryViewObject;	// 16 = 0x10
    long long _accessoryViewType;	// 24 = 0x18
    QuerySuggestionView *_querySuggestionView;	// 32 = 0x20
}

+ (id)identifier;	// IMP=0x00200000009219bb
+ (double)estimatedCellHeight;	// IMP=0x00100000009215ca
- (void).cxx_destruct;	// IMP=0x002000000092220a
@property(retain, nonatomic) QuerySuggestionView *querySuggestionView; // @synthesize querySuggestionView=_querySuggestionView;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) id accessoryViewObject; // @synthesize accessoryViewObject=_accessoryViewObject;
@property(nonatomic) __weak id <AutocompleteCellAccessoryDelegate> accessoryViewDelegate; // @synthesize accessoryViewDelegate=_accessoryViewDelegate;
- (void)didTapAccessoryViewButton:(id)arg1;	// IMP=0x00100000009220f4
- (void)setTitle:(id)arg1 highlightTitleRanges:(id)arg2 detailText:(id)arg3 style:(unsigned long long)arg4;	// IMP=0x0010000000921a68
- (void)prepareForReuse;	// IMP=0x00100000009219cd
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000009215d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

