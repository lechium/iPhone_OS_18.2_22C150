//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, NSURL, SGOrigin;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject
{
    SGOrigin *_origin;	// 8 = 0x8
}

+ (id)dateFormatter;	// IMP=0x001000000029e7d1
+ (id)contactSuggestionTypeBySuggestionType;	// IMP=0x001000000029e7a1
- (void).cxx_destruct;	// IMP=0x000000000029e791
@property(retain, nonatomic) SGOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSURL *url;
- (id)contactNameFromPerson:(id)arg1;	// IMP=0x000000000029e648
@property(readonly, nonatomic) NSString *with;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSAttributedString *formattedSnippet;
@property(readonly, nonatomic) NSString *appName;
- (id)initWithSGOrigin:(id)arg1;	// IMP=0x000000000029db46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

