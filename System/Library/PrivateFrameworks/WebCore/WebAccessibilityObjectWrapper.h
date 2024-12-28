//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper
{
    int m_isAccessibilityElement;	// 24 = 0x18
    unsigned long long m_accessibilityTraitsFromAncestor;	// 32 = 0x20
}

- (id)description;	// IMP=0x000000000048d830
- (struct CGPoint)accessibilityClickPoint;	// IMP=0x000000000048d800
- (id)accessibilityMathType;	// IMP=0x000000000048d500
- (long long)accessibilityMathLineThickness;	// IMP=0x000000000048d4b0
- (_Bool)accessibilityIsMathTopObject;	// IMP=0x000000000048d460
- (id)accessibilityMathFencedCloseString;	// IMP=0x000000000048d3a0
- (id)accessibilityMathFencedOpenString;	// IMP=0x000000000048d2e0
- (id)accessibilityMathPrescripts;	// IMP=0x000000000048d2a0
- (id)accessibilityMathPostscripts;	// IMP=0x000000000048d260
- (id)accessibilityPlatformMathSuperscriptKey;	// IMP=0x000000000048d250
- (id)accessibilityPlatformMathSubscriptKey;	// IMP=0x000000000048d240
- (id)accessibilityMathOverObject;	// IMP=0x000000000048d1d0
- (id)accessibilityMathUnderObject;	// IMP=0x000000000048d160
- (id)accessibilityMathSuperscriptObject;	// IMP=0x000000000048d0f0
- (id)accessibilityMathSubscriptObject;	// IMP=0x000000000048d080
- (id)accessibilityMathBaseObject;	// IMP=0x000000000048d010
- (id)accessibilityMathDenominatorObject;	// IMP=0x000000000048cfa0
- (id)accessibilityMathNumeratorObject;	// IMP=0x000000000048cf30
- (id)accessibilityMathRadicand;	// IMP=0x000000000048cea0
- (id)accessibilityMathRootIndexObject;	// IMP=0x000000000048ce30
- (id)accessibilitySortDirection;	// IMP=0x000000000048cdc0
- (id)accessibilityCurrentState;	// IMP=0x000000000048cd00
- (id)accessibilityInvalidStatus;	// IMP=0x000000000048cc40
- (_Bool)accessibilityIsShowingValidationMessage;	// IMP=0x000000000048cbf0
- (_Bool)accessibilityIsExpanded;	// IMP=0x000000000048cb50
- (_Bool)accessibilitySupportsARIAExpanded;	// IMP=0x000000000048cab0
- (_Bool)accessibilityIsPressed;	// IMP=0x000000000048ca60
- (_Bool)accessibilitySupportsARIAPressed;	// IMP=0x000000000048ca10
- (_Bool)accessibilityARIALiveRegionIsAtomic;	// IMP=0x000000000048c9c0
- (id)accessibilityARIARelevantStatus;	// IMP=0x000000000048c900
- (id)accessibilityARIALiveRegionStatus;	// IMP=0x000000000048c840
- (_Bool)accessibilityARIAIsBusy;	// IMP=0x000000000048c7f0
- (id)accessibilitySpeechHint;	// IMP=0x000000000048c7b0
- (_Bool)_accessibilityIsSwitch;	// IMP=0x000000000048c760
- (_Bool)accessibilityIsMarkAnnotation;	// IMP=0x000000000048c5b0
- (_Bool)accessibilityIsLastItemInSuggestion;	// IMP=0x000000000048c4c0
- (_Bool)accessibilityIsFirstItemInSuggestion;	// IMP=0x000000000048c400
- (_Bool)accessibilityIsDeletion;	// IMP=0x000000000048c380
- (_Bool)accessibilityIsInsertion;	// IMP=0x000000000048c300
- (id)accessibilityIdentifier;	// IMP=0x000000000048c240
- (id)accessibilityExpandedTextValue;	// IMP=0x000000000048c180
- (id)textMarkersForRange:(const void *)arg1;	// IMP=0x000000000048c070
- (id)textMarkerRangeForMarkers:(id)arg1;	// IMP=0x000000000048bee0
- (id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(_Bool)arg2;	// IMP=0x000000000048bdd0
- (long long)lengthForTextMarkers:(id)arg1;	// IMP=0x000000000048bca0
- (optional_c088adaa)rangeForTextMarkers:(id)arg1;	// IMP=0x000000000048bac0
- (id)previousMarkerForCharacterOffset:(void *)arg1;	// IMP=0x000000000048ba30
- (id)nextMarkerForCharacterOffset:(void *)arg1;	// IMP=0x000000000048b9a0
- (id)textMarkerForPoint:(struct CGPoint)arg1;	// IMP=0x000000000048b850
- (id)textRectsFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x000000000048b560
- (id)lineRectsForTextMarkerRange:(id)arg1;	// IMP=0x000000000048b190
- (id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x000000000048b020
- (optional_c088adaa)rangeFromMarkers:(id)arg1 withText:(id)arg2;	// IMP=0x000000000048add0
- (struct CGRect)frameForTextMarkers:(id)arg1;	// IMP=0x000000000048ac40
- (struct CGRect)frameForRange:(struct _NSRange)arg1;	// IMP=0x000000000048aa00
- (id)previousMarkerForMarker:(id)arg1;	// IMP=0x000000000048a900
- (id)nextMarkerForMarker:(id)arg1;	// IMP=0x000000000048a800
- (id)misspellingTextMarkerRange:(id)arg1 forward:(_Bool)arg2;	// IMP=0x000000000048a200
- (id)lineStartMarkerForMarker:(id)arg1;	// IMP=0x000000000048a030
- (id)lineMarkersForMarker:(id)arg1;	// IMP=0x0000000000489d40
- (id)lineEndMarkerForMarker:(id)arg1;	// IMP=0x0000000000489b70
- (id)selectedTextMarker;	// IMP=0x00000000004898f0
- (id)selectionRangeString;	// IMP=0x00000000004898b0
- (void)browserAccessibilityDeleteTextAtCursor:(long long)arg1;	// IMP=0x0000000000489760
- (void)browserAccessibilityInsertTextAtCursor:(id)arg1;	// IMP=0x00000000004896b0
- (_Bool)accessibilityInsertText:(id)arg1;	// IMP=0x00000000004895f0
- (_Bool)accessibilityReplaceRange:(struct _NSRange)arg1 withText:(id)arg2;	// IMP=0x0000000000489510
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;	// IMP=0x00000000004894f0
- (void)browserAccessibilitySetSelectedTextRange:(struct _NSRange)arg1;	// IMP=0x0000000000489490
- (struct _NSRange)_accessibilitySelectedTextRange;	// IMP=0x0000000000489470
- (struct _NSRange)browserAccessibilitySelectedTextRange;	// IMP=0x00000000004893d0
- (id)attributedStringForElement;	// IMP=0x0000000000489170
- (id)attributedStringForRange:(struct _NSRange)arg1;	// IMP=0x0000000000488d50
- (id)stringForRange:(struct _NSRange)arg1;	// IMP=0x0000000000488b00
- (id)textMarkerForPosition:(long long)arg1;	// IMP=0x0000000000488870
- (id)textMarkerRangeForSelection;	// IMP=0x0000000000488520
- (id)accessibilityObjectForTextMarker:(id)arg1;	// IMP=0x0000000000488410
- (struct _NSRange)elementTextRange;	// IMP=0x0000000000488350
- (id)textMarkerRange;	// IMP=0x00000000004881d0
- (long long)positionForTextMarker:(id)arg1;	// IMP=0x0000000000487f80
- (id)arrayOfTextForTextMarkers:(id)arg1 attributed:(_Bool)arg2;	// IMP=0x0000000000487b90
- (id)stringForTextMarkers:(id)arg1;	// IMP=0x00000000004879e0
- (void)_accessibilitySetValue:(id)arg1;	// IMP=0x0000000000487930
- (void)accessibilityDecrement;	// IMP=0x00000000004878e0
- (void)accessibilityIncrement;	// IMP=0x0000000000487890
- (void)accessibilityMoveSelectionToMarker:(id)arg1;	// IMP=0x0000000000487770
- (void)accessibilityDecreaseSelection:(unsigned char)arg1;	// IMP=0x0000000000487750
- (_Bool)_accessibilityIsFocusedForTesting;	// IMP=0x0000000000487720
- (void)_accessibilitySetFocus:(_Bool)arg1;	// IMP=0x00000000004876d0
- (void)accessibilityIncreaseSelection:(unsigned char)arg1;	// IMP=0x00000000004876b0
- (void)accessibilityModifySelection:(unsigned char)arg1 increase:(_Bool)arg2;	// IMP=0x0000000000487250
- (id)accessibilityFindMatchingObjects:(id)arg1;	// IMP=0x0000000000486ff0
- (void *)treeItemParentForObject:(void *)arg1;	// IMP=0x0000000000486fb0
- (void *)detailParentForObject:(void *)arg1;	// IMP=0x0000000000486e40
- (void *)detailParentForSummaryObject:(void *)arg1;	// IMP=0x0000000000486cc0
- (struct CGRect)_accessibilityScrollVisibleRect;	// IMP=0x0000000000486bd0
- (struct CGSize)_accessibilityScrollSize;	// IMP=0x0000000000486b00
- (struct CGPoint)_accessibilityScrollPosition;	// IMP=0x0000000000486a30
- (id)_accessibilityParentForSubview:(id)arg1;	// IMP=0x0000000000486960
- (id)attachmentView;	// IMP=0x0000000000486910
- (_Bool)_accessibilityActivate;	// IMP=0x00000000004867a0
- (_Bool)accessibilityPerformEscape;	// IMP=0x0000000000486750
- (id)accessibilityTextualContext;	// IMP=0x00000000004866f0
- (_Bool)isAttachment;	// IMP=0x00000000004866a0
- (id)accessibilityLinkedElement;	// IMP=0x0000000000486590
- (id)accessibilityErrorMessageElements;	// IMP=0x0000000000486400
- (id)accessibilityDetailsElements;	// IMP=0x0000000000486310
- (id)accessibilityFlowToElements;	// IMP=0x00000000004861b0
- (_Bool)accessibilityRequired;	// IMP=0x0000000000486160
- (id)accessibilityLinkRelationshipType;	// IMP=0x00000000004860a0
- (id)accessibilityImageOverlayElements;	// IMP=0x0000000000485fb0
- (id)_accessibilityPhotoDescription;	// IMP=0x0000000000485ef0
- (_Bool)accessibilityCanSetValue;	// IMP=0x0000000000485ea0
- (id)_accessibilityResolvedEditingStyles;	// IMP=0x0000000000485e60
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1;	// IMP=0x0000000000485e00
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1;	// IMP=0x0000000000485da0
- (id)_accessibilityWebDocumentView;	// IMP=0x0000000000485cc0
- (id)accessibilityFocusedUIElement;	// IMP=0x0000000000485c40
- (id)accessibilityContainer;	// IMP=0x00000000004859c0
- (_Bool)containsUnnaturallySegmentedChildren;	// IMP=0x00000000004858c0
- (struct CGRect)accessibilityFrame;	// IMP=0x0000000000485740
- (struct CGPoint)accessibilityActivationPoint;	// IMP=0x00000000004856d0
- (struct CGRect)accessibilityVisibleContentRect;	// IMP=0x0000000000485630
- (struct CGRect)accessibilityElementRect;	// IMP=0x00000000004855a0
- (struct CGRect)_accessibilityRelativeFrame;	// IMP=0x0000000000485450
- (void)handleNotificationRelayToChrome:(id)arg1 notificationData:(id)arg2;	// IMP=0x0000000000485300
- (void)accessibilityOverrideProcessNotification:(id)arg1 notificationData:(id)arg2;	// IMP=0x00000000004852f0
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x0000000000485150
- (_Bool)_accessibilityScrollToVisible;	// IMP=0x0000000000485110
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;	// IMP=0x0000000000485080
- (id)accessibilityURL;	// IMP=0x0000000000484fc0
- (id)accessibilityHint;	// IMP=0x0000000000484d70
- (_Bool)accessibilityIsComboBox;	// IMP=0x0000000000484d20
- (_Bool)accessibilityIsAttachmentElement;	// IMP=0x0000000000484cd0
- (_Bool)accessibilityIsIndeterminate;	// IMP=0x0000000000484c80
- (id)browserAccessibilityAttributedValueInRange:(struct _NSRange)arg1;	// IMP=0x0000000000484b90
- (id)browserAccessibilityValueInRange:(struct _NSRange)arg1;	// IMP=0x0000000000484b00
- (id)accessibilityValue;	// IMP=0x0000000000484540
- (id)accessibilityColorStringValue;	// IMP=0x0000000000484460
- (id)accessibilityPlaceholderValue;	// IMP=0x00000000004843a0
- (id)accessibilityDatetimeValue;	// IMP=0x00000000004842a0
- (unsigned long long)accessibilityBlockquoteLevel;	// IMP=0x0000000000484250
- (struct _NSRange)accessibilityColumnRange;	// IMP=0x00000000004841e0
- (struct _NSRange)accessibilityRowRange;	// IMP=0x00000000004840c0
- (unsigned long long)accessibilityARIAColumnIndex;	// IMP=0x0000000000484060
- (unsigned long long)accessibilityARIARowIndex;	// IMP=0x0000000000484000
- (unsigned long long)accessibilityARIAColumnCount;	// IMP=0x0000000000483f30
- (unsigned long long)accessibilityARIARowCount;	// IMP=0x0000000000483e60
- (unsigned long long)accessibilityColumnCount;	// IMP=0x0000000000483e00
- (unsigned long long)accessibilityRowCount;	// IMP=0x0000000000483da0
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;	// IMP=0x0000000000483d30
- (id)accessibilityHeaderElements;	// IMP=0x0000000000483a50
- (id)accessibilityTitleElement;	// IMP=0x0000000000483a00
- (void *)tableParent;	// IMP=0x0000000000483990
- (void *)tableCellParent;	// IMP=0x0000000000483940
- (id)accessibilityLabel;	// IMP=0x00000000004831e0
- (id)accessibilityBrailleRoleDescription;	// IMP=0x0000000000483120
- (id)accessibilityBrailleLabel;	// IMP=0x0000000000483060
- (id)accessibilityRoleDescription;	// IMP=0x0000000000482f30
- (double)_accessibilityMaxValue;	// IMP=0x0000000000482ee0
- (double)_accessibilityMinValue;	// IMP=0x0000000000482e90
- (_Bool)_accessibilityIsStrongPasswordField;	// IMP=0x0000000000482e20
- (_Bool)_accessibilityHasTouchEventListener;	// IMP=0x0000000000482dd0
- (_Bool)stringValueShouldBeUsedInLabel;	// IMP=0x0000000000482c20
- (_Bool)isAccessibilityElement;	// IMP=0x0000000000482bc0
- (_Bool)determineIsAccessibilityElement;	// IMP=0x0000000000482590
- (_Bool)isSVGGroupElement;	// IMP=0x0000000000482510
- (unsigned long long)accessibilityTraits;	// IMP=0x0000000000482020
- (unsigned long long)_accessibilityTextEntryTraits;	// IMP=0x0000000000481f40
- (void)accessibilityVideoEnterFullscreen;	// IMP=0x0000000000481ee0
- (void)accessibilityToggleMuteForMedia;	// IMP=0x0000000000481de0
- (_Bool)accessibilityIsMediaMuted;	// IMP=0x0000000000481cf0
- (_Bool)accessibilityIsMediaPlaying;	// IMP=0x0000000000481c00
- (id)interactiveVideoDescription;	// IMP=0x0000000000481ab0
- (_Bool)accessibilityIsWebInteractiveVideo;	// IMP=0x0000000000481a30
- (unsigned long long)_accessibilityTraitsFromAncestors;	// IMP=0x00000000004818d0
- (id)_accessibilityFrameAncestor;	// IMP=0x0000000000481720
- (id)_accessibilityFieldsetAncestor;	// IMP=0x0000000000481690
- (id)_accessibilityTableAncestor;	// IMP=0x00000000004814c0
- (id)_accessibilityLandmarkAncestor;	// IMP=0x0000000000481260
- (id)_accessibilityArticleAncestor;	// IMP=0x00000000004810b0
- (id)_accessibilityListAncestor;	// IMP=0x0000000000480ef0
- (id)_accessibilityDescriptionListAncestor;	// IMP=0x0000000000480d40
- (id)_accessibilityTreeAncestor;	// IMP=0x0000000000480b90
- (_Bool)accessibilityIsDialog;	// IMP=0x0000000000480b40
- (id)accessibilityLanguage;	// IMP=0x0000000000480a80
- (_Bool)accessibilityIsRequired;	// IMP=0x0000000000480a30
- (_Bool)accessibilityIsAttributeSettable:(id)arg1;	// IMP=0x00000000004809d0
- (_Bool)_accessibilityIsInTableCell;	// IMP=0x0000000000480980
- (_Bool)accessibilityIsInDescriptionListTerm;	// IMP=0x0000000000480930
- (_Bool)accessibilityIsInDescriptionListDefinition;	// IMP=0x00000000004808e0
- (_Bool)accessibilityHasWebApplicationAncestor;	// IMP=0x0000000000480890
- (_Bool)accessibilityHasDocumentRoleAncestor;	// IMP=0x0000000000480840
- (id)accessibilityPopupValue;	// IMP=0x0000000000480780
- (_Bool)accessibilityHasPopup;	// IMP=0x0000000000480730
- (id)_accessibilityWebRoleAsString;	// IMP=0x000000000047fd20
- (struct CGPath *)_accessibilityPath;	// IMP=0x000000000047fbf0
- (long long)indexOfAccessibilityElement:(id)arg1;	// IMP=0x000000000047fac0
- (id)accessibilityElementAtIndex:(long long)arg1;	// IMP=0x000000000047f9f0
- (long long)accessibilityElementCount;	// IMP=0x000000000047f960
- (id)accessibilityElements;	// IMP=0x000000000047f6d0
- (void)disableAttributeCaching;	// IMP=0x000000000047f670
- (void)enableAttributeCaching;	// IMP=0x000000000047f600
- (id)accessibilityHitTest:(struct CGPoint)arg1;	// IMP=0x000000000047f190
- (id)accessibilityPostProcessHitTest:(struct CGPoint)arg1;	// IMP=0x000000000047f180
- (_Bool)accessibilityCanFuzzyHitTest;	// IMP=0x000000000047ef10
- (id)accessibilityDOMIdentifier;	// IMP=0x000000000047ee50
- (unsigned long long)_axUpdatesFrequentlyTrait;	// IMP=0x000000000047ee40
- (unsigned long long)_axTextAreaTrait;	// IMP=0x000000000047ee30
- (unsigned long long)_axSearchFieldTrait;	// IMP=0x000000000047ee20
- (unsigned long long)_axRadioButtonTrait;	// IMP=0x000000000047ee10
- (unsigned long long)_axNotEnabledTrait;	// IMP=0x000000000047ee00
- (unsigned long long)_axSelectedTrait;	// IMP=0x000000000047edf0
- (unsigned long long)_axMenuItemTrait;	// IMP=0x000000000047ede0
- (unsigned long long)_axAdjustableTrait;	// IMP=0x000000000047edd0
- (unsigned long long)_axStaticTextTrait;	// IMP=0x000000000047edc0
- (unsigned long long)_axPopupButtonTrait;	// IMP=0x000000000047edb0
- (unsigned long long)_axToggleTrait;	// IMP=0x000000000047eda0
- (unsigned long long)_axButtonTrait;	// IMP=0x000000000047ed90
- (unsigned long long)_axTabBarTrait;	// IMP=0x000000000047ed80
- (unsigned long long)_axImageTrait;	// IMP=0x000000000047ed70
- (unsigned long long)_axTextOperationsAvailableTrait;	// IMP=0x000000000047ed60
- (unsigned long long)_axHasTextCursorTrait;	// IMP=0x000000000047ed50
- (unsigned long long)_axTextEntryTrait;	// IMP=0x000000000047ed40
- (unsigned long long)_axSecureTextFieldTrait;	// IMP=0x000000000047ed30
- (unsigned long long)_axWebContentTrait;	// IMP=0x000000000047ed20
- (unsigned long long)_axHeaderTrait;	// IMP=0x000000000047ed10
- (unsigned long long)_axVisitedTrait;	// IMP=0x000000000047ed00
- (unsigned long long)_axLinkTrait;	// IMP=0x000000000047ecf0
- (void)dealloc;	// IMP=0x000000000047ecc0
- (void)detach;	// IMP=0x000000000047ec60
- (void *)axBackingObject;	// IMP=0x000000000047ec40
- (id)initWithAccessibilityObject:(void *)arg1;	// IMP=0x000000000047ebf0

@end
