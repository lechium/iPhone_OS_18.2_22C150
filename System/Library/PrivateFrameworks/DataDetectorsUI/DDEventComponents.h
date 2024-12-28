//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKStructuredLocation, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DDEventComponents : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_eventTypeIdentifier;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    struct _NSRange _originRange;	// 48 = 0x30
    long long _source;	// 64 = 0x40
    unsigned long long _eventAttributes;	// 72 = 0x48
    NSString *_notes;	// 80 = 0x50
    NSURL *_URL;	// 88 = 0x58
    NSString *_location;	// 96 = 0x60
    EKStructuredLocation *_structuredLocation;	// 104 = 0x68
}

+ (id)_messageWithNaturalLanguageContext:(id)arg1 context:(id)arg2;	// IMP=0x0010000000016205
+ (id)_eventComponents:(id)arg1 withSuggestedTitleFromNaturalLanguageContext:(id)arg2 context:(id)arg3;	// IMP=0x00100000000160b2
+ (id)_eventsFromIntelligentSuggestions:(id)arg1;	// IMP=0x00100000000153f7
+ (id)_eventsFromNaturalLanguageText:(id)arg1 context:(id)arg2;	// IMP=0x0010000000014837
+ (id)_eventComponents:(id)arg1 matchingResult:(struct __DDResult *)arg2 context:(id)arg3;	// IMP=0x001000000001441d
+ (id)bestEventComponentsForResult:(struct __DDResult *)arg1 withNaturalLanguageContext:(id)arg2 suggestionsContext:(id)arg3 context:(id)arg4;	// IMP=0x0010000000013ccf
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000013cc7
- (void).cxx_destruct;	// IMP=0x00000000000167e7
@property(retain, nonatomic) EKStructuredLocation *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) unsigned long long eventAttributes; // @synthesize eventAttributes=_eventAttributes;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) struct _NSRange originRange; // @synthesize originRange=_originRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *eventTypeIdentifier; // @synthesize eventTypeIdentifier=_eventTypeIdentifier;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001432d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001418e

@end
