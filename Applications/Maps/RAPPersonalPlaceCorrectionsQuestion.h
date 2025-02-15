//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapsSuggestionsShortcut, NSMutableArray, NSString, RAPCommentQuestion, UIImage;

@interface RAPPersonalPlaceCorrectionsQuestion
{
    NSMutableArray *_userPaths;	// 8 = 0x8
    long long _shortcutType;	// 16 = 0x10
    MapsSuggestionsShortcut *_shortcut;	// 24 = 0x18
    RAPCommentQuestion *_commentQuestion;	// 32 = 0x20
    struct CLLocationCoordinate2D _originalCoordinate;	// 40 = 0x28
    struct CLLocationCoordinate2D _correctedCoordinate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000d9eeb3
@property(nonatomic) struct CLLocationCoordinate2D correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(readonly, nonatomic) struct CLLocationCoordinate2D originalCoordinate; // @synthesize originalCoordinate=_originalCoordinate;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
@property(readonly, nonatomic) MapsSuggestionsShortcut *shortcut; // @synthesize shortcut=_shortcut;
@property(nonatomic) long long shortcutType; // @synthesize shortcutType=_shortcutType;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) long long questionCategory;
@property(readonly, nonatomic) int userAction;
- (void)addUserPathItem:(int)arg1;	// IMP=0x0010000000d9ec6e
- (_Bool)isComplete;	// IMP=0x0010000000d9ec5c
- (void)submitRAPWithWillSubmitBlock:(CDUnknownBlockType)arg1 didSubmitBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d9e9e8
- (void)rapCompleted:(_Bool)arg1 privacyShown:(_Bool)arg2 analyticsEvent:(id)arg3;	// IMP=0x0010000000d9e9c2
- (_Bool)isAdjustedCoordinateBeyondThreshold;	// IMP=0x0010000000d9e8aa
- (id)_geoCoordinateFromUserCorrections;	// IMP=0x0010000000d9e7a7
- (void)_fillSubmissionParameters:(id)arg1;	// IMP=0x0010000000d9df79
@property(readonly, nonatomic) struct CLLocationCoordinate2D currentCoordinate;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 shortcut:(id)arg3;	// IMP=0x0010000000d9dc9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedDescription;
@property(copy, nonatomic) NSString *localizedServerControlledDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,C,N

@property(readonly) Class superclass;

@end

