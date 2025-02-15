//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPValue;

@protocol _CPStruct <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSDictionary *intKeyFields;
@property(copy, nonatomic) NSDictionary *stringKeyFields;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setIntKeyFields:(_CPValue *)arg1 forKey:(int)arg2;
- (_Bool)getIntKeyFields:(id *)arg1 forKey:(int)arg2;
- (void)setStringKeyFields:(_CPValue *)arg1 forKey:(NSString *)arg2;
- (_Bool)getStringKeyFields:(id *)arg1 forKey:(NSString *)arg2;
@end

