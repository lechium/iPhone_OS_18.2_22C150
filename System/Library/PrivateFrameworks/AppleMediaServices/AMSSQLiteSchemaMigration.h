//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSSQLiteConnection, NSError;

__attribute__((visibility("hidden")))
@interface AMSSQLiteSchemaMigration : NSObject
{
    AMSSQLiteConnection *_connection;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004e4dec
@property(readonly) _Bool success; // @synthesize success=_success;
@property(readonly) NSError *error; // @synthesize error=_error;
- (_Bool)_executeStatement:(id)arg1 canFailMigration:(_Bool)arg2 bindings:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x00000000004e4ccc
- (void)executeStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x00000000004e4caf
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004e4c92
- (void)executeStatement:(id)arg1;	// IMP=0x00000000004e4c7e
- (void)executeOptionalStatement:(id)arg1 bindings:(CDUnknownBlockType)arg2;	// IMP=0x00000000004e4c64
- (void)executeOptionalStatement:(id)arg1;	// IMP=0x00000000004e4c4a
- (id)initWithConnection:(id)arg1;	// IMP=0x00000000004e4bda

@end

