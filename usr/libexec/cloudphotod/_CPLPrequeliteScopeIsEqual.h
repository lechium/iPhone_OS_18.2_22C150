//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface _CPLPrequeliteScopeIsEqual : NSObject
{
    NSString *_identifier;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x002000000017dfa1
- (void).cxx_destruct;	// IMP=0x002000000017e0b2
- (id)bindValuesToKeepAlive;	// IMP=0x001000000017e0a4
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x001000000017e088
@property(readonly, nonatomic) NSData *sql;
- (id)initWithIdentifier:(id)arg1;	// IMP=0x001000000017e004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

