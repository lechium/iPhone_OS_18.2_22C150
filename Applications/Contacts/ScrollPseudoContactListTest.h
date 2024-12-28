//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString;

@interface ScrollPseudoContactListTest
{
    _Bool _animate;	// 8 = 0x8
    NSArray *_allSearchQueries;	// 16 = 0x10
    unsigned long long _currentQueryIndex;	// 24 = 0x18
    double _lastSearchBeginTime;	// 32 = 0x20
    NSMutableDictionary *_extraResults;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000010662
@property(retain, nonatomic) NSMutableDictionary *extraResults; // @synthesize extraResults=_extraResults;
@property(nonatomic) double lastSearchBeginTime; // @synthesize lastSearchBeginTime=_lastSearchBeginTime;
@property(nonatomic) unsigned long long currentQueryIndex; // @synthesize currentQueryIndex=_currentQueryIndex;
// Error: Property attributes should begin with the type ('T') attribute, property name: allSearchQueries
// Property attributes: (null)

@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
- (void)startSearchQueryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000104ab
- (_Bool)prepareForTestWithOptions:(id)arg1;	// IMP=0x00100000000100bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
