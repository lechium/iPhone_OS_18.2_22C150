//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface SearchHomeCitiesDataProvider : NSObject
{
    long long _type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    MISSING_TYPE *_title;	// 24 = 0x18
    NSArray *_objects;	// 32 = 0x20
    NSArray *_viewModels;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000767cdc
@property(retain, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)headerAccessibilityIdentifier;	// IMP=0x0010000000767c7b
- (id)initWithObjects:(id)arg1 type:(long long)arg2 identifier:(id)arg3 title:(id)arg4;	// IMP=0x0010000000767b26

// Remaining properties
@property(readonly, nonatomic) NSString *actionTitle;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wantsOneColumnLayout;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N


@end

