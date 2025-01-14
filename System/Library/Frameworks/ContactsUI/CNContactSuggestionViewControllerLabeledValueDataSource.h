//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNLabeledValue, NSAttributedString, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject
{
    CNLabeledValue *_labeledValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000034eaa8
@property(retain, nonatomic) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *with;
@property(readonly, nonatomic) NSString *date;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSAttributedString *formattedSnippet;
@property(readonly, nonatomic) NSString *appName;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithLabeledValue:(id)arg1;	// IMP=0x000000000034e965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

