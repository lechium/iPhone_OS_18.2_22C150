//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSMutableArray, NSString, VKCImageAnalysis;

__attribute__((visibility("hidden")))
@interface VKAnalyticsSessionAccumulator : NSObject
{
    _Bool _didSelectText;	// 8 = 0x8
    _Bool _didActivateHighlightAll;	// 9 = 0x9
    _Bool _didActivateRegex;	// 10 = 0xa
    _Bool _isPerformingAutomatedTest;	// 11 = 0xb
    VKCImageAnalysis *_analysis;	// 16 = 0x10
    NSMutableArray *_interactionEvents;	// 24 = 0x18
    NSMutableArray *_textEvents;	// 32 = 0x20
    NSMutableArray *_quickActionEvents;	// 40 = 0x28
    NSMutableArray *_mrcEvents;	// 48 = 0x30
    NSMutableArray *_ddEvents;	// 56 = 0x38
    NSMutableArray *_vsEvents;	// 64 = 0x40
    NSMutableArray *_subjectEvents;	// 72 = 0x48
    NSDate *_sessionOpenDate;	// 80 = 0x50
    unsigned long long _numberOfEvents;	// 88 = 0x58
    unsigned long long _numberOfTextEvents;	// 96 = 0x60
    unsigned long long _numberOfMRCEvents;	// 104 = 0x68
    unsigned long long _numberOfDDEvents;	// 112 = 0x70
    unsigned long long _numberOfVSEvents;	// 120 = 0x78
    unsigned long long _numberOfQuickActionEvents;	// 128 = 0x80
    unsigned long long _numberOfSubjectEvents;	// 136 = 0x88
    unsigned long long _numberOfMRCElements;	// 144 = 0x90
    unsigned long long _numberOfDDElements;	// 152 = 0x98
    unsigned long long _numberOfVSElements;	// 160 = 0xa0
    unsigned long long _textLength;	// 168 = 0xa8
    unsigned long long _averageTextSelectionLength;	// 176 = 0xb0
    unsigned long long _numberOfSelectionChanges;	// 184 = 0xb8
    double _sessionDuration;	// 192 = 0xc0
    NSString *_bundleIdentifier;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000005f87d
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) _Bool isPerformingAutomatedTest; // @synthesize isPerformingAutomatedTest=_isPerformingAutomatedTest;
@property(nonatomic) double sessionDuration; // @synthesize sessionDuration=_sessionDuration;
@property(nonatomic) _Bool didActivateRegex; // @synthesize didActivateRegex=_didActivateRegex;
@property(nonatomic) _Bool didActivateHighlightAll; // @synthesize didActivateHighlightAll=_didActivateHighlightAll;
@property(nonatomic) unsigned long long numberOfSelectionChanges; // @synthesize numberOfSelectionChanges=_numberOfSelectionChanges;
@property(nonatomic) unsigned long long averageTextSelectionLength; // @synthesize averageTextSelectionLength=_averageTextSelectionLength;
@property(nonatomic) unsigned long long textLength; // @synthesize textLength=_textLength;
@property(nonatomic) unsigned long long numberOfVSElements; // @synthesize numberOfVSElements=_numberOfVSElements;
@property(nonatomic) unsigned long long numberOfDDElements; // @synthesize numberOfDDElements=_numberOfDDElements;
@property(nonatomic) unsigned long long numberOfMRCElements; // @synthesize numberOfMRCElements=_numberOfMRCElements;
@property(nonatomic) unsigned long long numberOfSubjectEvents; // @synthesize numberOfSubjectEvents=_numberOfSubjectEvents;
@property(nonatomic) unsigned long long numberOfQuickActionEvents; // @synthesize numberOfQuickActionEvents=_numberOfQuickActionEvents;
@property(nonatomic) unsigned long long numberOfVSEvents; // @synthesize numberOfVSEvents=_numberOfVSEvents;
@property(nonatomic) unsigned long long numberOfDDEvents; // @synthesize numberOfDDEvents=_numberOfDDEvents;
@property(nonatomic) unsigned long long numberOfMRCEvents; // @synthesize numberOfMRCEvents=_numberOfMRCEvents;
@property(nonatomic) unsigned long long numberOfTextEvents; // @synthesize numberOfTextEvents=_numberOfTextEvents;
@property(nonatomic) unsigned long long numberOfEvents; // @synthesize numberOfEvents=_numberOfEvents;
@property(nonatomic) _Bool didSelectText; // @synthesize didSelectText=_didSelectText;
@property(retain, nonatomic) NSDate *sessionOpenDate; // @synthesize sessionOpenDate=_sessionOpenDate;
@property(retain, nonatomic) NSMutableArray *subjectEvents; // @synthesize subjectEvents=_subjectEvents;
@property(retain, nonatomic) NSMutableArray *vsEvents; // @synthesize vsEvents=_vsEvents;
@property(retain, nonatomic) NSMutableArray *ddEvents; // @synthesize ddEvents=_ddEvents;
@property(retain, nonatomic) NSMutableArray *mrcEvents; // @synthesize mrcEvents=_mrcEvents;
@property(retain, nonatomic) NSMutableArray *quickActionEvents; // @synthesize quickActionEvents=_quickActionEvents;
@property(retain, nonatomic) NSMutableArray *textEvents; // @synthesize textEvents=_textEvents;
@property(retain, nonatomic) NSMutableArray *interactionEvents; // @synthesize interactionEvents=_interactionEvents;
@property(retain, nonatomic) VKCImageAnalysis *analysis; // @synthesize analysis=_analysis;
- (id)description;	// IMP=0x000000000005f3be
- (void)send;	// IMP=0x000000000005f3b8
@property(readonly, nonatomic) NSDictionary *coreAnalyticsDictionary;
- (void)calculateDidActivateRegex;	// IMP=0x000000000005ed7c
- (void)calculateDidHighlightAll;	// IMP=0x000000000005ed00
- (void)calculateAverageSelectedLengthFromTextEvents;	// IMP=0x000000000005ead0
- (void)close;	// IMP=0x000000000005e81d
- (void)addEvent:(id)arg1;	// IMP=0x000000000005e4b6
- (id)initWithAnalysis:(id)arg1 customIdentifier:(id)arg2;	// IMP=0x000000000005e370

@end

