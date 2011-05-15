
#import <Cocoa/Cocoa.h>


@class FSMonitor;


@interface Project : NSObject {
    NSString *_path;

    FSMonitor *_monitor;
}

- (id)initWithPath:(NSString *)path;

@property(nonatomic, readonly, copy) NSString *path;

@property(nonatomic, getter=isMonitoringEnabled) BOOL monitoringEnabled;

@end