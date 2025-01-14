//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface APDUResponse : NSObject
{
    NSData *_data;	// 8 = 0x8
}

+ (id)responseWithDataField:(id)arg1 SW1:(unsigned char)arg2 SW2:(unsigned char)arg3;	// IMP=0x00400000000022bb
+ (id)responseWithData:(id)arg1;	// IMP=0x001000000000226e
- (void).cxx_destruct;	// IMP=0x0020000000002619
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) NSData *dataField;
@property(readonly) unsigned char SW2;
@property(readonly) unsigned char SW1;
- (id)description;	// IMP=0x0010000000002361
- (id)initWithData:(id)arg1;	// IMP=0x0010000000002203

@end

