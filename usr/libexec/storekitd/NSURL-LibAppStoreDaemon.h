//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (LibAppStoreDaemon)
- (id)lib_URLByStrippingQuery;	// IMP=0x00200000000699f1
- (id)lib_URLByAppendingQueryDictionary:(id)arg1;	// IMP=0x0010000000069573
- (id)lib_URLByAppendingPathComponents:(id)arg1;	// IMP=0x0010000000069433
- (id)lib_queryDictionary;	// IMP=0x00100000000691e7
@property(readonly) NSString *lib_sanitizedFilePath;
@end

