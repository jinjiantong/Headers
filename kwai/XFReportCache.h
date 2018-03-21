//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XFDBObject;

@interface XFReportCache : NSObject
{
    Class _cls;
    XFDBObject *_dbObject;
}

+ (void)createDirectory:(id)arg1;
+ (id)globelDBPathWithName:(id)arg1;
+ (id)storagePath:(id)arg1;
@property(retain, nonatomic) XFDBObject *dbObject; // @synthesize dbObject=_dbObject;
@property(retain, nonatomic) Class cls; // @synthesize cls=_cls;
- (void).cxx_destruct;
- (_Bool)checkDatabaseFile:(id)arg1;
- (id)reportFromDBDBObject:(id)arg1;
- (id)dbObjectFromReport:(id)arg1;
- (id)dbConnection;
- (void)deleteReports;
- (id)reports;
- (void)_saveReports:(id)arg1;
- (void)saveReports:(id)arg1;
- (id)initWithClass:(Class)arg1;

@end
