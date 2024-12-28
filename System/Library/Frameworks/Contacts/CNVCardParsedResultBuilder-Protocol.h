//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class NSArray, NSData, NSSet, NSString;

@protocol CNVCardParsedResultBuilder <NSObject>
- (NSSet *)validCountryCodes;
- (void)setUnknownProperties:(NSArray *)arg1;
- (_Bool)setImageData:(NSData *)arg1 forReference:(NSString *)arg2 clipRects:(NSArray *)arg3;
- (id)valueForProperty:(NSString *)arg1;
- (_Bool)setValues:(NSArray *)arg1 labels:(NSArray *)arg2 isPrimaries:(NSArray *)arg3 forProperty:(NSString *)arg4;
- (_Bool)setValue:(id)arg1 forProperty:(NSString *)arg2;
- (_Bool)canSetValueForProperty:(NSString *)arg1;
- (id)build;
@end
