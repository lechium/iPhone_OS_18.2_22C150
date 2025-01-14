//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ChildItemsViewModel, MKLocalSearchCompletion, NSArray, NSString, UIImageView, _SearchResultChildItemGridView;
@protocol AcSearchResultTableViewCellDelegate, ChildItemButtonProtocol;

@interface AcSearchResultTableViewCell
{
    MKLocalSearchCompletion *_completion;	// 232 = 0xe8
    UIImageView *_imageView;	// 240 = 0xf0
    int _imageState;	// 248 = 0xf8
    NSArray<ChildItemButtonProtocol> *_childItemButtons;	// 256 = 0x100
    _SearchResultChildItemGridView *_childItemGrid;	// 264 = 0x108
    _Bool _shouldEnableGrayscaleHighlighting;	// 272 = 0x110
    id _object;	// 280 = 0x118
    id <AcSearchResultTableViewCellDelegate> _delegate;	// 288 = 0x120
    long long _autocompleteCellType;	// 296 = 0x128
    long long _autocompleteClientSourceType;	// 304 = 0x130
    NSString *_searchQuery;	// 312 = 0x138
    ChildItemsViewModel *_childItemsViewModel;	// 320 = 0x140
    NSArray *_childItems;	// 328 = 0x148
}

+ (id)identifierWithChildItemsCount:(unsigned long long)arg1;	// IMP=0x00200000009e94b3
+ (double)childItemRowSpacing;	// IMP=0x00100000009e94a5
- (void).cxx_destruct;	// IMP=0x00200000009ec59b
@property(copy, nonatomic) NSArray *childItems; // @synthesize childItems=_childItems;
@property(retain, nonatomic) ChildItemsViewModel *childItemsViewModel; // @synthesize childItemsViewModel=_childItemsViewModel;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) _Bool shouldEnableGrayscaleHighlighting; // @synthesize shouldEnableGrayscaleHighlighting=_shouldEnableGrayscaleHighlighting;
@property(nonatomic) long long autocompleteClientSourceType; // @synthesize autocompleteClientSourceType=_autocompleteClientSourceType;
@property(nonatomic) long long autocompleteCellType; // @synthesize autocompleteCellType=_autocompleteCellType;
@property(nonatomic) __weak id <AcSearchResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (double)paddingAboveContextualInformationStackView;	// IMP=0x00100000009ec47f
- (void)didTapChildItemButtonForChildItem:(id)arg1;	// IMP=0x00100000009ec365
- (void)removeTransitLabel;	// IMP=0x00100000009ec2b6
- (void)addTransitLabelWithFirstPartDetailString:(id)arg1 secondPartDetailString:(id)arg2;	// IMP=0x00100000009ebfb2
- (void)prepareForReuse;	// IMP=0x00100000009ebf26
- (_Bool)supportsClientServerDifferentiation;	// IMP=0x00100000009ebf08
- (_Bool)wantsTwoLineLayout;	// IMP=0x00100000009ebecb
- (id)autocompleteClientSourceString;	// IMP=0x00100000009ebe64
- (void)setChildItems:(id)arg1 viewModel:(id)arg2;	// IMP=0x00100000009ebb50
- (void)updateChildItems;	// IMP=0x00100000009eba42
- (void)loadPhoto;	// IMP=0x00100000009eb630
- (void)setupPlaceContextContent:(id)arg1;	// IMP=0x00100000009eb5f6
- (void)setAccessoryViewType:(long long)arg1;	// IMP=0x00100000009eb5b5
- (void)_updateAccessoryTintColor;	// IMP=0x00100000009eb464
- (void)updateContent;	// IMP=0x00100000009eb40e
- (void)updateThirdLineVisibility;	// IMP=0x00100000009eb350
- (void)didUpdatePublisherResult;	// IMP=0x00100000009eb2fa
- (void)didUpdateMapItem;	// IMP=0x00100000009eb283
- (id)distanceString;	// IMP=0x00100000009eb147
- (id)attributedSubtitleString;	// IMP=0x00100000009eb0c5
- (id)delimiterColor;	// IMP=0x00100000009eb07e
- (id)attributedSecondPartDetailString;	// IMP=0x00100000009eae7b
- (id)attributedFirstPartDetailString;	// IMP=0x00100000009ea9b6
- (id)secondaryLabelFont;	// IMP=0x00100000009ea973
- (id)titleFont;	// IMP=0x00100000009ea930
- (id)titleHighlightFont;	// IMP=0x00100000009ea8ed
- (id)titleRegularFont;	// IMP=0x00100000009ea8aa
- (id)attributedTitleString;	// IMP=0x00100000009ea3f4
- (_Bool)isCompletionTypeAddress;	// IMP=0x00100000009ea3cf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00100000009e9dab
- (void)updateChildItemGridAlignmentRectInset;	// IMP=0x00100000009e9c98
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00100000009e9c86
- (long long)containerAlignment;	// IMP=0x00100000009e9be4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000009e9b76
- (id)_highlightedLabelColor;	// IMP=0x00100000009e9b17
- (void)_setHighlightedLabelColors;	// IMP=0x00100000009e9a49
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000009e9649
- (double)trailingMargin;	// IMP=0x00100000009e9629
- (double)labelStackViewSpacing;	// IMP=0x00000000009e961b
- (double)iconSize;	// IMP=0x00100000009e95fb
- (double)estimatedChildItemsStackViewWidthWithContentViewWidth:(double)arg1;	// IMP=0x00100000009e9555

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

