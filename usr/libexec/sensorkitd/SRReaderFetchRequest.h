//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SRCursor;
@protocol SRRequestReading;

@interface SRReaderFetchRequest : NSObject
{
    id <SRRequestReading> _readerRequest;	// 8 = 0x8
    _Bool _bypassHoldingPeriod;	// 16 = 0x10
    double _from;	// 24 = 0x18
    double _to;	// 32 = 0x20
    SRCursor *_cursor;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000ba90
@property(retain, nonatomic) SRCursor *cursor; // @synthesize cursor=_cursor;
- (void)setBypassHoldingPeriod:(_Bool)arg1;	// IMP=0x001000000000bd10
- (_Bool)bypassHoldingPeriod;	// IMP=0x001000000000bd00
@property double to; // @synthesize to=_to;
@property double from; // @synthesize from=_from;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000bb50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000baa0
@property(retain, nonatomic) NSString *deviceIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier;
@property(retain, nonatomic) NSString *sensor;
- (void)dealloc;	// IMP=0x001000000000b970
- (id)init;	// IMP=0x001000000000b920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

